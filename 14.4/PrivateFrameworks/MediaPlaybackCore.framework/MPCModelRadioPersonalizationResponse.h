//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPModelResponse.h>

@class MPSectionedCollection, MPStoreLibraryPersonalizationResponse;

@interface MPCModelRadioPersonalizationResponse : MPModelResponse
{
    MPStoreLibraryPersonalizationResponse *_personalizationResponse;
    MPSectionedCollection *_radioStationTracks;
}

- (void).cxx_destruct;
@property(copy, nonatomic) MPSectionedCollection *radioStationTracks; // @synthesize radioStationTracks=_radioStationTracks;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 personalizationResponse:(id)arg2;

// Remaining properties
@property(readonly, copy, nonatomic) MPSectionedCollection *results; // @dynamic results;

@end

