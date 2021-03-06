//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MusicLibrary/NSCopying-Protocol.h>

@class MIPAlbum, MIPArtist, MIPGenre, MIPPlaybackInfo, NSString;

@interface MIPAudiobook : PBCodable <NSCopying>
{
    MIPAlbum *_album;
    MIPArtist *_artist;
    int _audioFormat;
    MIPArtist *_composer;
    int _discNumber;
    MIPGenre *_genre;
    NSString *_hlsPlaylistURL;
    MIPPlaybackInfo *_playbackInfo;
    int _trackNumber;
    int _userRating;
    _Bool _excludeFromShuffle;
    _Bool _hasVideo;
    struct {
        unsigned int audioFormat:1;
        unsigned int discNumber:1;
        unsigned int trackNumber:1;
        unsigned int userRating:1;
        unsigned int excludeFromShuffle:1;
        unsigned int hasVideo:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *hlsPlaylistURL; // @synthesize hlsPlaylistURL=_hlsPlaylistURL;
@property(retain, nonatomic) MIPPlaybackInfo *playbackInfo; // @synthesize playbackInfo=_playbackInfo;
@property(nonatomic) _Bool hasVideo; // @synthesize hasVideo=_hasVideo;
@property(nonatomic) int audioFormat; // @synthesize audioFormat=_audioFormat;
@property(nonatomic) _Bool excludeFromShuffle; // @synthesize excludeFromShuffle=_excludeFromShuffle;
@property(nonatomic) int userRating; // @synthesize userRating=_userRating;
@property(nonatomic) int trackNumber; // @synthesize trackNumber=_trackNumber;
@property(nonatomic) int discNumber; // @synthesize discNumber=_discNumber;
@property(retain, nonatomic) MIPGenre *genre; // @synthesize genre=_genre;
@property(retain, nonatomic) MIPArtist *composer; // @synthesize composer=_composer;
@property(retain, nonatomic) MIPArtist *artist; // @synthesize artist=_artist;
@property(retain, nonatomic) MIPAlbum *album; // @synthesize album=_album;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasHlsPlaylistURL;
@property(readonly, nonatomic) _Bool hasPlaybackInfo;
@property(nonatomic) _Bool hasHasVideo;
@property(nonatomic) _Bool hasAudioFormat;
@property(nonatomic) _Bool hasExcludeFromShuffle;
@property(nonatomic) _Bool hasUserRating;
@property(nonatomic) _Bool hasTrackNumber;
@property(nonatomic) _Bool hasDiscNumber;
@property(readonly, nonatomic) _Bool hasGenre;
@property(readonly, nonatomic) _Bool hasComposer;
@property(readonly, nonatomic) _Bool hasArtist;
@property(readonly, nonatomic) _Bool hasAlbum;

@end

