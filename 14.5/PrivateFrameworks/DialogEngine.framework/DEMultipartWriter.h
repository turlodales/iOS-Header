//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DialogEngine/DEWriter-Protocol.h>

@protocol DEWriter;

@interface DEMultipartWriter : NSObject <DEWriter>
{
    _Bool _partClosed;
    NSObject<DEWriter> *_writer;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool partClosed; // @synthesize partClosed=_partClosed;
@property(retain, nonatomic) NSObject<DEWriter> *writer; // @synthesize writer=_writer;
- (void)writeData:(id)arg1;
- (void)newPart;
- (void)close;
- (void)closeMessage;
- (void)dealloc;
- (id)init;
- (id)initWithWriter:(id)arg1;

@end

