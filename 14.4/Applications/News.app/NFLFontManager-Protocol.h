//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject, NSSet;
@protocol OS_dispatch_queue;

@protocol NFLFontManager <NSObject>
- (void)loadFontsAsync:(NSSet *)arg1 relativePriority:(long long)arg2 callbackQueue:(NSObject<OS_dispatch_queue> *)arg3 completion:(void (^)(void))arg4;
@end

