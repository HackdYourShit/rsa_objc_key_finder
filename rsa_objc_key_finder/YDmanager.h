#import <Foundation/Foundation.h>
#import "YDfind_factors.h"
#import "YDPrettyConsole.h"

@protocol YDManagerRules <NSObject>
@required
- (void) startRunLoop;
@end

@interface YDManager : NSObject  <YDManagerRules>{
    YDPrettyConsole *progressBar;
    NSDate *startTime;
    NSDate *endTime;
}

- (instancetype) init:(int)argCount;
- (void)startRunLoop;
- (void)setNotification;
- (void)cleanExit;

@end