//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IPCMessageObject.h"

__attribute__((visibility("hidden")))
@interface IPCGuidanceStateMessage : IPCMessageObject
{
    _Bool _includeRoute;
}

@property(nonatomic) _Bool includeRoute; // @synthesize includeRoute=_includeRoute;
- (id)description;
- (id)dictionaryValue;
- (id)initWithDictionary:(id)arg1;

@end

