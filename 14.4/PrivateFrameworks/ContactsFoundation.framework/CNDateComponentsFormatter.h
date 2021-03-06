//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@class NSArray, NSLocale, NSString;

@interface CNDateComponentsFormatter : NSFormatter
{
    NSLocale *_locale;
    NSArray *_lazyFormatterFutures;
    NSString *_dateFormatPlaceholderString;
}

+ (id)chineseLongStyleRelatedGregorianYearMonthDayFormatter;
+ (id)chineseCyclicYearMonthDayFormatter;
+ (id)chineseRelatedGregorianYearMonthDayHanidayFormatter;
+ (id)chineseMonthDayHanidayFormatter;
+ (id)chineseMonthDayFormatter;
+ (id)chineseRelatedGregorianYearMonthDayFormatter;
+ (id)shortDayMonthYearlessDateFormatterWithLocale:(id)arg1;
+ (id)shortDayMonthYearDateFormatterWithLocale:(id)arg1;
+ (id)longDayMonthYearlessDateFormatterWithLocale:(id)arg1;
+ (id)longDayMonthYearDateFormatterWithLocale:(id)arg1;
+ (id)formatterFuturesWithLocale:(id)arg1;
+ (_Bool)shouldUseIslamicSpecificFormattersForLocale:(id)arg1;
+ (_Bool)shouldUseChinaSpecificFormattersForLocale:(id)arg1;
+ (id)dateFormatterWithYearFormat:(id)arg1 hasLongFormat:(_Bool)arg2 locale:(id)arg3;
+ (id)os_log;
- (void).cxx_destruct;
@property(retain, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
- (id)normalizedComponentsFromDate:(id)arg1 calendar:(id)arg2 timeZone:(id)arg3;
- (unsigned long long)componentsToExtract;
- (_Bool)getObjectValue:(id *)arg1 forString:(id)arg2 errorDescription:(id *)arg3;
- (id)stringForObjectValue:(id)arg1;
- (id)dateComponentsFromString:(id)arg1;
- (id)stringFromDateComponents:(id)arg1;
- (id)displayFormatterForComponents:(id)arg1;
- (void)regenerateFormatterFutures;
- (id)arabicIslamicPlaceholderString;
- (id)arabicGregorianPlaceholderString;
- (_Bool)shouldUseArabicIslamicPlaceholderStringForLanguage:(id)arg1;
- (_Bool)shouldUseArabicGregorianPlaceholderStringForLanguage:(id)arg1;
- (id)chinesePlaceholderStringWithDay:(id)arg1 month:(id)arg2 year:(id)arg3;
- (_Bool)shouldUseChinesePlaceholderString;
- (id)placeholderStringWithLocalizedDay:(id)arg1 month:(id)arg2 year:(id)arg3;
- (id)dateFormatPlaceholderStringForLanguage:(id)arg1;
- (id)dateFormatPlaceholderString;
- (id)dmyFormatString;
- (id)placeholderSubstitutionStringWithDay:(unsigned long long)arg1 month:(unsigned long long)arg2 year:(unsigned long long)arg3;
- (id)init;

@end

