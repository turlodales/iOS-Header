//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SBFLazyObjectProvider : NSObject
{
    id _object;
    CDUnknownBlockType _generator;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType generator; // @synthesize generator=_generator;
@property(retain, nonatomic) id object; // @synthesize object=_object;
- (id)initWithGenerator:(CDUnknownBlockType)arg1;

@end

