//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameCenterUI/GKDaemonProxyDataUpdateDelegate-Protocol.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC12GameCenterUI29GameCenterDataUpdatePresenter : NSObject <GKDaemonProxyDataUpdateDelegate>
{
    MISSING_TYPE *onGameCenterDataUpdate;
}

- (void).cxx_destruct;
- (void)friendRequestSelected:(id)arg1;
- (void)setBadgeCount:(long long)arg1 forType:(unsigned long long)arg2;
- (void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (void)dealloc;
- (id)init;

@end

