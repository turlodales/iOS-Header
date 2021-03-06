//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPRemoteCommandEvent.h>

@class NSData, NSString;

@interface MPSetPlaybackSessionCommandEvent : MPRemoteCommandEvent
{
    NSString *_identifier;
    NSString *_type;
    NSData *_playbackSessionData;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *playbackSessionData; // @synthesize playbackSessionData=_playbackSessionData;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;

@end

