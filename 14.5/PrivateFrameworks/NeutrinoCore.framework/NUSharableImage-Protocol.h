//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NSObject-Protocol.h>

@protocol NUSharableImage <NSObject>
- (int)useCount;
- (_Bool)decrementUseCount;
- (void)incrementUseCount;
- (_Bool)isInUse;
- (_Bool)isShared;
@end

