//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarDaemon/CADAccountAccessHandler-Protocol.h>

@class NSMutableArray;

@interface CADGroupedAccountAccessHandler : NSObject <CADAccountAccessHandler>
{
    NSMutableArray *_accessHandlers;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *accessHandlers; // @synthesize accessHandlers=_accessHandlers;
- (void)reset;
- (id)restrictedCalendarRowIDsForAction:(unsigned long long)arg1;
- (_Bool)isActionAllowed:(unsigned long long)arg1 forAccountIdentifier:(id)arg2;
- (_Bool)isAccountManaged:(id)arg1;
- (void)addAccountAccessHandler:(id)arg1;
- (id)init;

@end

