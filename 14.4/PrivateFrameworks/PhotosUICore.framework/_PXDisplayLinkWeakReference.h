//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _PXDisplayLinkWeakReference : NSObject
{
    id _object;
    SEL _selector;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SEL selector; // @synthesize selector=_selector;
@property(readonly, nonatomic) __weak id object; // @synthesize object=_object;
- (void)handleDisplayLink:(id)arg1;
- (id)initWithObject:(id)arg1 selector:(SEL)arg2;

@end

