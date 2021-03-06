//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PDFKit/PDFPageDrawProgressCallback-Protocol.h>

@class PDFPageBackgroundManagerPrivate;

__attribute__((visibility("hidden")))
@interface PDFPageBackgroundManager : NSObject <PDFPageDrawProgressCallback>
{
    PDFPageBackgroundManagerPrivate *_private;
}

- (void).cxx_destruct;
- (_Bool)drawProgressCallback;
- (void)_shiftImagesAtIndex:(unsigned long long)arg1 downwards:(_Bool)arg2;
- (void)_cleanup;
- (_Bool)_expectedQualityIndexForPageIndex:(unsigned long long)arg1 forQuality:(int *)arg2;
- (void)_drawPageImage:(unsigned long long)arg1 forQuality:(int)arg2;
- (_Bool)_findPageIndexNeedingUpdate:(unsigned long long *)arg1 forQuality:(int *)arg2;
- (void)_update;
- (void)forceSetBackgroundImage:(id)arg1 forPageIndex:(unsigned long long)arg2;
- (void)cancel;
- (void)didSwapPageAtIndex:(unsigned long long)arg1 withIndex:(unsigned long long)arg2;
- (void)didRemovePageAtIndex:(unsigned long long)arg1;
- (void)didInsertPageAtIndex:(unsigned long long)arg1;
- (id)backgroundImageForPageIndex:(unsigned long long)arg1 withFoundQuality:(int *)arg2;
- (void)forceUpdateActivePageIndex:(unsigned long long)arg1 withMaxDuration:(double)arg2;
- (void)willForceUpdate;
- (void)updateActivePageIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 andRenderingProperties:(id)arg2;

@end

