//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActionKit/NSCopying-Protocol.h>
#import <ActionKit/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface WFPlaylistDescriptor : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _entireMusicLibrary;
    NSString *_playlistName;
    NSNumber *_persistentIdentifier;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *persistentIdentifier; // @synthesize persistentIdentifier=_persistentIdentifier;
@property(readonly, copy, nonatomic) NSString *playlistName; // @synthesize playlistName=_playlistName;
@property(readonly, nonatomic) _Bool entireMusicLibrary; // @synthesize entireMusicLibrary=_entireMusicLibrary;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlaylistName:(id)arg1 persistentIdentifier:(id)arg2;
- (id)initWithEntireMusicLibrary;

@end

