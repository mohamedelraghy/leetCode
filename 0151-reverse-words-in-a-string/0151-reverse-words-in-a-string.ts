function reverseWords(s: string): string {
    return s.trim()
        .split(" ")
        .filter(s => s !== '')
        .reverse()
        .join(" ")
};