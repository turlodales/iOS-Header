//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIPrintPaper.h>

@interface UICreatePDFActivityPrintPaper : UIPrintPaper
{
    struct CGSize __paperSize;
}

@property(nonatomic) struct CGSize _paperSize; // @synthesize _paperSize=__paperSize;
- (id)_keywordForPDFMetadata;
- (struct CGRect)printableRect;
- (struct CGSize)paperSize;
- (id)initWithPaperSize:(struct CGSize)arg1;

@end

