//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/NSCopying-Protocol.h>

@class MPCFuture;

@interface MPCFutureInvalidationToken : NSObject <NSCopying>
{
    MPCFuture *_future;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MPCFuture *future; // @synthesize future=_future;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

