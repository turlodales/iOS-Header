//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSCharts/NSCopying-Protocol.h>
#import <TSCharts/NSMutableCopying-Protocol.h>
#import <TSCharts/TSCHCustomFormatSupport-Protocol.h>
#import <TSCharts/TSCHDataFormatter-Protocol.h>
#import <TSCharts/TSCHDataFormatterPersistableStyleObject-Protocol.h>
#import <TSCharts/TSCHDataFormatterSupportedClientFormatObject-Protocol.h>
#import <TSCharts/TSCHFormatTypeSupport-Protocol.h>

@class NSString, NSUUID, TSKFormat;

@interface TSCHNumberFormat : NSObject <NSCopying, NSMutableCopying, TSCHDataFormatter, TSCHCustomFormatSupport, TSCHDataFormatterPersistableStyleObject, TSCHDataFormatterSupportedClientFormatObject, TSCHFormatTypeSupport>
{
    TSKFormat *_format;
    NSString *_prefixString;
    NSString *_suffixString;
}

+ (id)instanceWithArchive:(const struct FormatStructArchive *)arg1 unarchiver:(id)arg2;
+ (id)numberFormatWithTSKFormat:(id)arg1 prefixString:(id)arg2 suffixString:(id)arg3;
+ (id)numberFormatWithFormatType:(unsigned int)arg1 decimalPlaces:(unsigned int)arg2 showThousandsSeparator:(_Bool)arg3;
+ (id)defaultNumberFormatWithFormatType:(unsigned int)arg1 locale:(id)arg2;
+ (id)defaultDecimalNumberFormat;
+ (int)labelFormatTypeFromTSUFormatType:(unsigned int)arg1;
+ (_Bool)supportsNumericPropertiesForFormatType:(unsigned int)arg1;
+ (_Bool)supportsFormatType:(unsigned int)arg1;
+ (_Bool)defaultBaseUseMinusSign;
+ (unsigned int)defaultBasePlaces;
+ (unsigned int)defaultBase;
+ (_Bool)defaultShowThousandsSeparator;
+ (int)defaultNegativeNumberStyle;
+ (int)defaultFractionAccuracy;
+ (id)defaultCurrencyCode;
+ (id)automaticDecimalPlaces;
+ (unsigned int)defaultDecimalPlaces;
+ (id)customFormatForKey:(id)arg1 documentRoot:(id)arg2 fromPasteboardCustomFormatList:(id)arg3;
+ (id)defaultDecimalNumberFormatWithPrefixString:(id)arg1 suffixString:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *suffixString; // @synthesize suffixString=_suffixString;
@property(copy, nonatomic) NSString *prefixString; // @synthesize prefixString=_prefixString;
@property(copy, nonatomic) TSKFormat *format; // @synthesize format=_format;
- (void)saveToArchive:(struct FormatStructArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct FormatStructArchive *)arg1 unarchiver:(id)arg2;
@property(readonly, nonatomic) long long numberOfDecimalPlaces;
- (id)convertToSupportedClientFormatObjectWithLocale:(id)arg1;
- (id)convertToPersistableStyleObject;
- (_Bool)supportsAutoMinMax;
- (_Bool)isCompatibleWithDataFormatter:(id)arg1;
- (id)chartFormattedInspectorStringForValue:(id)arg1 locale:(id)arg2;
- (id)chartFormattedStringForValue:(id)arg1 locale:(id)arg2;
- (id)p_formattedBodyStringForDouble:(double)arg1 locale:(id)arg2;
- (_Bool)isDuration;
- (_Bool)isDate;
- (id)dataFormatterForDocumentRoot:(id)arg1 pasteboardCustomFormatList:(id)arg2;
@property(readonly, copy, nonatomic) NSUUID *customFormatListKey;
- (id)customFormatKey;
@property(readonly, nonatomic) _Bool isCustom;
@property(readonly, nonatomic) _Bool baseUseMinusSign;
@property(readonly, nonatomic) unsigned int basePlaces;
@property(readonly, nonatomic) unsigned int base;
@property(readonly, nonatomic) double scaleFactor;
- (id)customFormat;
@property(readonly, nonatomic) int fractionAccuracy;
@property(readonly, nonatomic) _Bool showThousandsSeparator;
@property(readonly, nonatomic) int negativeStyle;
@property(readonly, nonatomic) _Bool useAccountingStyle;
@property(readonly, copy, nonatomic) NSString *currencyCode;
@property(readonly, nonatomic) unsigned int decimalPlaces;
- (int)valueType;
@property(readonly, nonatomic) unsigned int formatType;
- (id)p_formatTypeDescription;
@property(readonly, nonatomic) _Bool isBase;
@property(readonly, nonatomic) _Bool isFraction;
@property(readonly, nonatomic) _Bool isScientific;
@property(readonly, nonatomic) _Bool isPercentage;
@property(readonly, nonatomic) _Bool isCurrency;
@property(readonly, nonatomic) _Bool isDecimal;
@property(readonly, nonatomic) _Bool supportsNumericProperties;
- (id)numberFormatByResettingToDefaultNegativeStyleIfAvailable;
- (int)negativeStyleForNumberFormatter;
- (unsigned int)decimalPlacesForNumberFormatter;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTSKFormat:(id)arg1 prefixString:(id)arg2 suffixString:(id)arg3;
- (id)initWithNullableTSKFormat:(id)arg1 prefixString:(id)arg2 suffixString:(id)arg3;
- (id)upgradedNumberFormatFromPreUFFOrUnity1_0;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

