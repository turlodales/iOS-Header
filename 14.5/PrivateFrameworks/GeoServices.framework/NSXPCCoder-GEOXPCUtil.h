//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSXPCCoder.h>

@interface NSXPCCoder (GEOXPCUtil)
- (id)geo_decodeXPCStringForKey:(id)arg1;
- (id)geo_decodeXPCDataForKey:(id)arg1;
- (double)geo_decodeXPCDoubleForKey:(id)arg1 success:(_Bool *)arg2;
- (double)geo_decodeXPCDoubleForKey:(id)arg1 defaultValue:(double)arg2;
- (long long)geo_decodeXPCInt64ForKey:(id)arg1 success:(_Bool *)arg2;
- (long long)geo_decodeXPCInt64ForKey:(id)arg1 defaultValue:(long long)arg2;
- (void)geo_encodeXPCString:(id)arg1 forKey:(id)arg2;
- (void)geo_encodeXPCData:(id)arg1 forKey:(id)arg2;
- (void)geo_encodeXPCDouble:(double)arg1 forKey:(id)arg2;
- (void)geo_encodeXPCInt64:(long long)arg1 forKey:(id)arg2;
@end

