//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, PDFDocument;

__attribute__((visibility("hidden")))
@interface PDFViewLayoutPrivate : NSObject
{
    id delegate;
    _Bool delegateKnowsMargins;
    _Bool delegateKnowsDisplayMode;
    _Bool delegateKnowsDisplayAsBook;
    _Bool delegateKnowsDisplayBox;
    _Bool delegateKnowsDisplayRTL;
    _Bool delegateKnowsDisplaysDirection;
    _Bool delegateKnowsDocumentMargins;
    _Bool delegateKnowsIsUsingPageViewController;
    PDFDocument *document;
    unsigned long long pageCount;
    NSLock *pageLayoutLock;
    struct CGRect *pageLayoutBounds;
    struct CGSize singlePageContinuousSize;
    struct CGSize twoUpContinousSize;
    long long cachedContinuousSizeDisplayDirection;
}

- (void).cxx_destruct;

@end

