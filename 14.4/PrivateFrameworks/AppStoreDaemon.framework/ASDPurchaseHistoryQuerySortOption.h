//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/NSSecureCoding-Protocol.h>

@class NSString;

@interface ASDPurchaseHistoryQuerySortOption : NSObject <NSSecureCoding>
{
    _Bool _ascending;
    NSString *_name;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property _Bool ascending; // @synthesize ascending=_ascending;
@property(copy) NSString *name; // @synthesize name=_name;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 ascending:(_Bool)arg2;

@end

