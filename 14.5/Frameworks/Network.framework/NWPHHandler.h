//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface NWPHHandler : NSObject
{
    NSArray *_allowedEntitlementGroup;
    CDUnknownFunctionPointerType _handlerFunction;
}

- (void).cxx_destruct;
@property CDUnknownFunctionPointerType handlerFunction; // @synthesize handlerFunction=_handlerFunction;
@property(retain) NSArray *allowedEntitlementGroup; // @synthesize allowedEntitlementGroup=_allowedEntitlementGroup;
- (id)initWithHandlerFunction:(CDUnknownFunctionPointerType)arg1 allowedEntitlementGroup:(id)arg2;

@end

