//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IPCMessageObject.h"

__attribute__((visibility("hidden")))
@interface IPCHandleTrafficAlertMessage : IPCMessageObject
{
    _Bool _shouldReroute;
}

@property(nonatomic) _Bool shouldReroute; // @synthesize shouldReroute=_shouldReroute;
- (id)description;
- (id)dictionaryValue;
- (id)initWithDictionary:(id)arg1;

@end

