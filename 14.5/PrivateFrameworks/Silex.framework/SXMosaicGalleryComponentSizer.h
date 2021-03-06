//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXComponentSizer.h>

#import <Silex/SXMosaicGalleryLayouterDataSource-Protocol.h>

@class NSString, SXMosaicGalleryLayouter;

@interface SXMosaicGalleryComponentSizer : SXComponentSizer <SXMosaicGalleryLayouterDataSource>
{
    SXMosaicGalleryLayouter *_layouter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SXMosaicGalleryLayouter *layouter; // @synthesize layouter=_layouter;
- (id)documentColumnLayoutForGalleryLayouter:(id)arg1;
- (unsigned long long)numberOfItemsForGalleryLayouter:(id)arg1;
- (_Bool)galleryLayouter:(id)arg1 viewIsCurrentlyFullscreenForItemAtIndex:(unsigned long long)arg2;
- (id)galleryLayouter:(id)arg1 viewForItemAtIndex:(unsigned long long)arg2;
- (struct CGSize)galleryLayouter:(id)arg1 dimensionsForItemAtIndex:(unsigned long long)arg2;
- (double)calculateHeightForWidth:(double)arg1 layoutContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

