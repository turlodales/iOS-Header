//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DialogEngine/DEWriter-Protocol.h>

@class NSArray, NSMutableData;

@interface DEMultiWriter : NSObject <DEWriter>
{
    NSMutableData *_data;
    NSArray *_writers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *writers; // @synthesize writers=_writers;
@property(retain, nonatomic) NSMutableData *data; // @synthesize data=_data;
- (void)writeData:(id)arg1;
- (void)close;
- (id)init;
- (id)initWithWriters:(id)arg1;

@end

