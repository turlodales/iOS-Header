//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <LocationSupport/CLIntersiloServiceProtocol-Protocol.h>

@class CLIntersiloServiceMockPayload, NSString;

@protocol CLIntersiloServiceMockProtocol <CLIntersiloServiceProtocol>
- (CLIntersiloServiceMockPayload *)syncgetPayloadForKey:(NSString *)arg1;
- (CLIntersiloServiceMockPayload *)syncgetPayloadForSelector:(SEL)arg1;
- (void)removePayloadForKey:(NSString *)arg1;
- (void)removePayloadForSelector:(SEL)arg1;
- (void)setPayload:(CLIntersiloServiceMockPayload *)arg1 forKey:(NSString *)arg2;
- (void)setPayload:(CLIntersiloServiceMockPayload *)arg1 forSelector:(SEL)arg2;
@end

