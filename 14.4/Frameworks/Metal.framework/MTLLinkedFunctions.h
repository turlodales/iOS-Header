//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Metal/NSCopying-Protocol.h>

@class NSArray, NSDictionary;

@interface MTLLinkedFunctions : NSObject <NSCopying>
{
}

+ (id)linkedFunctions;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)reset;

// Remaining properties
@property(copy, nonatomic) NSArray *binaryFunctions; // @dynamic binaryFunctions;
@property(copy, nonatomic) NSArray *functions; // @dynamic functions;
@property(copy, nonatomic) NSDictionary *groups; // @dynamic groups;

@end

