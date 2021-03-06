//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSCopying-Protocol.h>

@interface NSPointerFunctions : NSObject <NSCopying>
{
}

+ (id)pointerFunctionsWithOptions:(unsigned long long)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property _Bool usesWeakReadAndWriteBarriers;
@property _Bool usesStrongWriteBarrier;
@property CDUnknownFunctionPointerType relinquishFunction;
@property CDUnknownFunctionPointerType acquireFunction;
@property CDUnknownFunctionPointerType descriptionFunction;
@property CDUnknownFunctionPointerType isEqualFunction;
@property CDUnknownFunctionPointerType hashFunction;
@property CDUnknownFunctionPointerType sizeFunction;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithOptions:(unsigned long long)arg1;

@end

