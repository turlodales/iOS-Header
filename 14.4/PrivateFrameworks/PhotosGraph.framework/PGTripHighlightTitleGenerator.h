//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGTitleGenerator.h>

@protocol PGEventEnrichment;

@interface PGTripHighlightTitleGenerator : PGTitleGenerator
{
    id <PGEventEnrichment> _collection;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <PGEventEnrichment> collection; // @synthesize collection=_collection;
- (_Bool)_useSplitTimeTitlesIfNeeded;
- (id)_locationTitle;
- (void)_generateTitleAndSubtitleWithResult:(CDUnknownBlockType)arg1;
- (id)initWithCollection:(id)arg1;

@end

