//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class NSString, NSUUID;

@protocol HMDSettingModelBaseProtocol <NSObject>
@property(readonly, nonatomic) NSString *nameForKeyPath;
@property(readonly, nonatomic) NSUUID *hmbParentModelID;
@property(readonly, nonatomic) NSUUID *hmbModelID;
- (id)copyWithNewParentModelID:(NSUUID *)arg1;
@end

