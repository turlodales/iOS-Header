//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BusinessChatService/NSObject-Protocol.h>

@class BCSConfigItem;

@protocol BCSConfigCaching <NSObject>
- (void)deleteConfigItemForType:(long long)arg1;
- (void)updateConfigItem:(BCSConfigItem *)arg1 withType:(long long)arg2;
- (BCSConfigItem *)configItemForType:(long long)arg1;
@end

