//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AvatarUI/NSObject-Protocol.h>

@class AVTAvatarFetchRequest, AVTMemoji, NSArray;
@protocol AVTAvatarRecord;

@protocol AVTAvatarStore <NSObject>
- (void)duplicateAvatar:(id <AVTAvatarRecord>)arg1 completionBlock:(void (^)(_Bool, id <AVTAvatarRecord>, NSError *))arg2;
- (void)deleteAvatar:(id <AVTAvatarRecord>)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)saveAvatarRecord:(id <AVTAvatarRecord>)arg1 thumbnailAvatar:(AVTMemoji *)arg2 completionBlock:(void (^)(_Bool, NSError *))arg3 thumbnailGenerationCompletionBlock:(void (^)(_Bool, NSError *))arg4;
- (void)fetchAvatarsForFetchRequest:(AVTAvatarFetchRequest *)arg1 completionHandler:(void (^)(NSArray *, NSError *))arg2;
- (NSArray *)avatarsForFetchRequest:(AVTAvatarFetchRequest *)arg1 error:(id *)arg2;
- (_Bool)canCreateAvatarWithError:(id *)arg1;
- (_Bool)canCreateAvatar;
@end

