function daysBetweenDates(date1: string, date2: string): number {
    let mili = 1000 * 60 * 60 * 24;
    return Math.abs((new Date(date1).getTime() - new Date(date2).getTime()) / mili);
};