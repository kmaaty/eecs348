#include <stdio.h>
#include <string.h>
#include <ctype.h>

static double to_celsius(double value, char scale) {
    switch (scale) {
        case 'F': return (value - 32.0) * 5.0 / 9.0;
        case 'K': return value - 273.15;
        case 'C':
        default: return value;
    }
}

static double from_celsius(double celsius, char scale) {
    switch (scale) {
        case 'F': return celsius * 9.0 / 5.0 + 32.0;
        case 'K': return celsius + 273.15;
        case 'C':
        default: return celsius;
    }
}

static const char *categorize(double celsius) {
    if (celsius < 0.0) return "Freezing";
    if (celsius < 10.0) return "Cold";
    if (celsius < 25.0) return "Comfortable";
    if (celsius < 35.0) return "Hot";
    if (celsius > 35.0) return "Extreme Heat";
    else {
        return "No catagory found.";
    }
}

static const char *advisory(const char *category) {
    if (strcmp(category, "Freezing") == 0) return "Stay indoors.";
    if (strcmp(category, "Cold") == 0) return "Wear a jacket.";
    if (strcmp(category, "Comfortable") == 0) return "It's nice out.";
    if (strcmp(category, "Hot") == 0) return "Drink lots of water!";
    else {
        return "Stay indoors.";
    }
}

static int read_scale(const char *prompt, char *scale) {
    char buffer[16];
    printf("%s", prompt);
    if (scanf("%15s", buffer) != 1) return 0;
    char c = (char)toupper((unsigned char)buffer[0]);
    if (c != 'C' && c != 'F' && c != 'K') return 0;
    *scale = c;
    return 1;
}

int main(void) {
    double value;
    char from_scale, to_scale;

    printf("Enter the temperature value: ");
    if (scanf("%lf", &value) != 1) {
        printf("Invalid temperature value.\n");
        return 1;
    }

    if (!read_scale("Enter the original scale (C, F, or K): ", &from_scale)) {
        printf("Invalid original scale. Must be C, F, or K.\n");
        return 1;
    }

    if (!read_scale("Enter the scale to convert to (C, F, or K): ", &to_scale)) {
        printf("Invalid target scale. Must be C, F, or K.\n");
        return 1;
    }

    double celsius = to_celsius(value, from_scale);
    double converted = from_celsius(celsius, to_scale);
    
    const char *category = categorize(celsius);
    const char *note = advisory(category);

    printf("Converted temperature: %.2f %c\n", converted, to_scale);
    printf("Temperature category: %s\n", category);
    printf("Weather advisory: %s\n", note);
    return 0;
}