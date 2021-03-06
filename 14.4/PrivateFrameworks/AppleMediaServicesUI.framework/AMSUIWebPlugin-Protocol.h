//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServicesUI/NSObject-Protocol.h>

@class ACAccount, AMSProcessInfo, AMSPromise, NSDictionary, NSString;
@protocol AMSBagProtocol;

@protocol AMSUIWebPlugin <NSObject>
@property(readonly, nonatomic) NSString *globalName;
- (AMSPromise *)runActionWithIdentifier:(NSString *)arg1 options:(NSDictionary *)arg2;
- (NSDictionary *)generateGlobalProperties;
- (id)initWithBag:(id <AMSBagProtocol>)arg1 account:(ACAccount *)arg2 clientInfo:(AMSProcessInfo *)arg3 propertiesChangedHandler:(void (^)(void))arg4;
@end

