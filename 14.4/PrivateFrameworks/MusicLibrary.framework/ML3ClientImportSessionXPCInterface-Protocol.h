//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MusicLibrary/NSObject-Protocol.h>

@class ML3ClientImportItem;

@protocol ML3ClientImportSessionXPCInterface <NSObject>

@optional
- (void)sessionDidUpdateProgress:(float)arg1;
- (void)sessionFailedToRemoveItem:(ML3ClientImportItem *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)sessionFailedToUpdateItem:(ML3ClientImportItem *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)sessionFailedToAddItem:(ML3ClientImportItem *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
@end

