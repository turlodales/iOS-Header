//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class _MRNowPlayingClientProtobuf, _MRNowPlayingPlayerProtobuf, _MROriginProtobuf;

@interface _MRNowPlayingPlayerPathProtobuf : PBCodable <NSCopying>
{
    _MRNowPlayingClientProtobuf *_client;
    _MROriginProtobuf *_origin;
    _MRNowPlayingPlayerProtobuf *_player;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _MRNowPlayingPlayerProtobuf *player; // @synthesize player=_player;
@property(retain, nonatomic) _MRNowPlayingClientProtobuf *client; // @synthesize client=_client;
@property(retain, nonatomic) _MROriginProtobuf *origin; // @synthesize origin=_origin;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasPlayer;
@property(readonly, nonatomic) _Bool hasClient;
@property(readonly, nonatomic) _Bool hasOrigin;

@end

