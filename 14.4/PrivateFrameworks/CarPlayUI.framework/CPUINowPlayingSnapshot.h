//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MPArtworkCatalog, MPCPlayerResponse, MPCPlayerResponseItem, MPCPlayerResponseTracklist, MPModelSong, NSNumber, NSString;

@interface CPUINowPlayingSnapshot : NSObject
{
    NSString *_bundleIdentifier;
    NSString *_title;
    NSString *_artist;
    NSString *_album;
    MPArtworkCatalog *_artworkCatalog;
    long long _state;
    MPCPlayerResponseTracklist *_tracklist;
    MPModelSong *_song;
    MPCPlayerResponse *_response;
    MPCPlayerResponseItem *_responseItem;
    CDStruct_fce57115 _durationSnapshot;
}

+ (id)knownJumpIntervals;
- (void).cxx_destruct;
@property(readonly, nonatomic) MPCPlayerResponseItem *responseItem; // @synthesize responseItem=_responseItem;
@property(readonly, nonatomic) MPCPlayerResponse *response; // @synthesize response=_response;
@property(readonly, nonatomic) MPModelSong *song; // @synthesize song=_song;
@property(readonly, nonatomic) MPCPlayerResponseTracklist *tracklist; // @synthesize tracklist=_tracklist;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) CDStruct_fce57115 durationSnapshot; // @synthesize durationSnapshot=_durationSnapshot;
@property(readonly, nonatomic) MPArtworkCatalog *artworkCatalog; // @synthesize artworkCatalog=_artworkCatalog;
@property(readonly, nonatomic) NSString *album; // @synthesize album=_album;
@property(readonly, nonatomic) NSString *artist; // @synthesize artist=_artist;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)commandWithType:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool shouldEnableNextButton;
@property(readonly, nonatomic) _Bool shouldEnableBackButton;
@property(readonly, nonatomic) NSNumber *jumpForwardInterval;
@property(readonly, nonatomic) NSNumber *jumpBackInterval;
- (id)initWithResponse:(id)arg1;

@end

