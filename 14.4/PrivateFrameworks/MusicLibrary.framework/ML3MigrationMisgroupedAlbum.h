//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface ML3MigrationMisgroupedAlbum : NSObject
{
    NSMutableArray *_misgroupedTracks;
    long long _albumPID;
    long long _albumArtistPID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long albumArtistPID; // @synthesize albumArtistPID=_albumArtistPID;
@property(readonly, nonatomic) long long albumPID; // @synthesize albumPID=_albumPID;
@property(readonly, nonatomic) NSArray *misgroupedTracks;
- (void)addMisgroupedTrack:(id)arg1;
- (id)initWithAlbumPID:(long long)arg1 albumArtistPID:(long long)arg2;

@end

