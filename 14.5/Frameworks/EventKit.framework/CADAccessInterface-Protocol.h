//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CADDatabaseInitializationOptions;

@protocol CADAccessInterface
- (void)CADDatabaseResetWithReply:(void (^)(int))arg1;
- (void)CADDatabaseGetAccess:(void (^)(int, _Bool, _Bool))arg1;
- (void)CADDatabaseSetInitializationOptions:(CADDatabaseInitializationOptions *)arg1 reply:(void (^)(int))arg2;
@end

