#import "NSObject.h"

@class NSArray, NSMutableDictionary, NSString;

@interface CMapParser : NSObject
{
    BOOL _vertical;
    NSMutableDictionary *_map;
    NSString *_source;
    NSArray *_words;
    unsigned long long _position;
    unsigned long long _max;
    NSArray *_integersInProgress;
}

@property(retain, nonatomic) NSArray *integersInProgress; // @synthesize integersInProgress=_integersInProgress;
@property(nonatomic) BOOL vertical; // @synthesize vertical=_vertical;
@property(nonatomic) unsigned long long max; // @synthesize max=_max;
@property(nonatomic) unsigned long long position; // @synthesize position=_position;
@property(retain, nonatomic) NSArray *words; // @synthesize words=_words;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSMutableDictionary *map; // @synthesize map=_map;
- (void).cxx_destruct;
- (void)parseData;
- (void)parseCmap;
- (void)codespacerangeParseWithCount:(unsigned long long)arg1;
- (void)cidrangeParseWithCount:(unsigned long long)arg1;
- (void)bfrangeParseWithCount:(unsigned long long)arg1;
- (void)cidcharParseWithCount:(unsigned long long)arg1;
- (void)bfcharParseWithCount:(unsigned long long)arg1;
- (void)parseOperator:(id)arg1 withCount:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3;
- (void)addRangeStart:(long long)arg1 end:(long long)arg2 to:(long long)arg3;
- (void)addMappingFrom:(long long)arg1 to:(long long)arg2;
- (id)nextWord;
- (long long)nextInteger;
- (id)integersFromHex:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithStream:(id)arg1;

@end

