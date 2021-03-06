//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriCore/NSCopying-Protocol.h>

@interface SiriCoreSQLiteQueryRange : NSObject <NSCopying>
{
    unsigned long long _limit;
    unsigned long long _offset;
}

@property(readonly, nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) unsigned long long limit; // @synthesize limit=_limit;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLimit:(unsigned long long)arg1 offset:(unsigned long long)arg2;
- (id)initWithLimit:(unsigned long long)arg1;

@end

