//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface SVXServiceCommandHandlerRegistry : NSObject
{
    NSDictionary *_handlersByServiceCommandClassName;
}

- (void).cxx_destruct;
- (id)handlersForCommand:(id)arg1;
- (id)initWithHandlers:(id)arg1;

@end

