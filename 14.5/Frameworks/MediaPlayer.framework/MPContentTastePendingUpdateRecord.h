//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface MPContentTastePendingUpdateRecord : NSObject
{
    NSString *_playlistGlobalID;
    long long _storeAdamID;
    long long _tasteType;
    long long _type;
    NSUUID *_UUID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) long long tasteType; // @synthesize tasteType=_tasteType;
@property(readonly, nonatomic) long long storeAdamID; // @synthesize storeAdamID=_storeAdamID;
@property(readonly, nonatomic) NSString *playlistGlobalID; // @synthesize playlistGlobalID=_playlistGlobalID;
- (void)_initializeWithType:(long long)arg1 tasteType:(long long)arg2;
- (id)initWithStoreAdamID:(long long)arg1 tasteType:(long long)arg2;
- (id)initWithPlaylistGlobalID:(id)arg1 tasteType:(long long)arg2;

@end

