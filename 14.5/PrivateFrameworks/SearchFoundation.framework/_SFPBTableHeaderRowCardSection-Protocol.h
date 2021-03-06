//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, _SFPBColor, _SFPBFormattedText, _SFPBPunchout, _SFPBTableAlignmentSchema;

@protocol _SFPBTableHeaderRowCardSection <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(nonatomic) _Bool alignRowsToHeader;
@property(nonatomic) int verticalAlign;
@property(nonatomic) _Bool reducedRowHeight;
@property(copy, nonatomic) NSString *tabGroupIdentifier;
@property(nonatomic) _Bool isSubHeader;
@property(copy, nonatomic) NSArray *datas;
@property(retain, nonatomic) _SFPBTableAlignmentSchema *alignmentSchema;
@property(copy, nonatomic) NSString *tableIdentifier;
@property(retain, nonatomic) _SFPBColor *backgroundColor;
@property(nonatomic) int separatorStyle;
@property(copy, nonatomic) NSString *type;
@property(nonatomic) _Bool hasBottomPadding;
@property(nonatomic) _Bool hasTopPadding;
@property(nonatomic) _Bool canBeHidden;
@property(copy, nonatomic) NSString *punchoutPickerDismissText;
@property(copy, nonatomic) NSString *punchoutPickerTitle;
@property(copy, nonatomic) NSArray *punchoutOptions;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_SFPBFormattedText *)dataAtIndex:(unsigned long long)arg1;
- (unsigned long long)dataCount;
- (void)addData:(_SFPBFormattedText *)arg1;
- (void)clearData;
- (_SFPBPunchout *)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
- (void)addPunchoutOptions:(_SFPBPunchout *)arg1;
- (void)clearPunchoutOptions;
@end

