//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVTUIEnvironment, NSArray, NSCache;
@protocol AVTStickerPack;

@interface AVTStickerConfigurationProvider : NSObject
{
    NSCache *_stickerConfigurationCache;
    AVTUIEnvironment *_environment;
    NSArray<AVTStickerPack> *_stickerPacks;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray<AVTStickerPack> *stickerPacks; // @synthesize stickerPacks=_stickerPacks;
@property(retain, nonatomic) AVTUIEnvironment *environment; // @synthesize environment=_environment;
@property(retain, nonatomic) NSCache *stickerConfigurationCache; // @synthesize stickerConfigurationCache=_stickerConfigurationCache;
- (id)availableStickerNamesForAvatarRecord:(id)arg1;
- (id)stickerConfigurationForAvatarRecord:(id)arg1 stickerName:(id)arg2;
- (id)stickerConfigurationsForAvatarRecord:(id)arg1;
- (id)initWithEnvironment:(id)arg1 forStickerPacks:(id)arg2;

@end

