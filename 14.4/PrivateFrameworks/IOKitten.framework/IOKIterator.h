//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IOKitten/IOKObject.h>

@interface IOKIterator : IOKObject
{
    CDUnknownBlockType _enumerationBlock;
}

- (void).cxx_destruct;
- (void)enumerate;
- (void)enumerateWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (void)reset;
- (id)nextObject;
- (id)initWithIterator:(unsigned int)arg1 enumerationBlock:(CDUnknownBlockType)arg2;
- (id)initWithIterator:(unsigned int)arg1;
- (id)initWithIOObject:(unsigned int)arg1;

@end

