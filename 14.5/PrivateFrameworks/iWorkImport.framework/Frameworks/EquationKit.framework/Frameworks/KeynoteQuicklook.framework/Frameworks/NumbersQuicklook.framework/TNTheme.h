//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSApplication/TSATheme.h>

@class NSArray;

@interface TNTheme : TSATheme
{
    NSArray *mTablePrototypes;
}

+ (void)initialize;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct ThemeArchive *)arg1 archiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)loadFromArchive:(const struct ThemeArchive *)arg1 unarchiver:(id)arg2;
- (void)bootstrapBlackHardCodedTheme;
- (void)bootstrapWhiteHardCodedTheme;
- (void)p_initDefaultHardCodedStyles;
@property(retain, nonatomic) NSArray *tablePrototypes;

@end

