//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/PBSlideBase.h>

__attribute__((visibility("hidden")))
@interface PBSlideMaster : PBSlideBase
{
}

+ (void)flattenPlaceholderTextStylesIntoLayout:(id)arg1 layoutType:(int)arg2 masterStyleMap:(id)arg3;
+ (void)setSlideMasterTextStyles:(id)arg1 state:(id)arg2;
+ (void)readSlideMasterColorScheme:(id)arg1 slideHolder:(id)arg2 state:(id)arg3;
+ (void)readSlideMasterTextStyles:(id)arg1 slideHolder:(id)arg2 state:(id)arg3;
+ (void)setFont:(id)arg1 fromCharacterProperties:(id)arg2;
+ (void)setCannedOtherTextListStyle:(id)arg1;
+ (void)padMissingLevels:(id)arg1;
+ (id)createMasterStyleMap:(id)arg1 state:(id)arg2;
+ (void)flattenMasterStyleType:(int)arg1 baseType:(int)arg2 masterStyleMap:(id)arg3;
+ (void)flattenBaseMasterStyleType:(int)arg1 masterStyleMap:(id)arg2;
+ (void)readSlideMasterName:(id)arg1 slideHolder:(id)arg2 state:(id)arg3;
+ (void)readMasterDrawables:(id)arg1 slideHolder:(id)arg2 state:(id)arg3;
+ (void)flattenTextStyle:(id)arg1 intoTextBox:(id)arg2;
+ (id)textBodyForPlaceholderType:(int)arg1 slideLayout:(id)arg2;
+ (int)textTypeFor:(int)arg1 placeholderType:(int)arg2;

@end

