//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailFoundation/EFSQLBindable-Protocol.h>

@class NSString;

@interface EFSQLBinding : NSObject <EFSQLBindable>
{
}

+ (id)nullBinding;
+ (id)bindingWithDouble:(double)arg1;
+ (id)bindingWithInt64:(long long)arg1;
+ (id)bindingWithData:(id)arg1;
+ (id)bindingWithString:(id)arg1;
@property(readonly, nonatomic) EFSQLBinding *ef_SQLBinding;
- (void)bindTo:(struct sqlite3_stmt *)arg1 withSQLIndex:(int)arg2;
- (void)bindToStatement:(id)arg1 usingName:(id)arg2;
- (void)bindToStatement:(id)arg1 usingIndex:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

