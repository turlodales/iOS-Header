//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriCore/NSCopying-Protocol.h>

@class NSArray;

@interface SiriCoreSQLiteQueryOrder : NSObject <NSCopying>
{
    long long _mode;
    NSArray *_columnNames;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *columnNames; // @synthesize columnNames=_columnNames;
@property(readonly, nonatomic) long long mode; // @synthesize mode=_mode;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithColumnNames:(id)arg1 mode:(long long)arg2;

@end

