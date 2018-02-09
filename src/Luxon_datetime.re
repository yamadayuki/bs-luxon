type t;

type datetimeunit = [
  | `year
  | `month
  | `day
  | `hour
  | `minute
  | `second
  | `millisecond
];

type dt = {
  .
  "year": int,
  "month": int,
  "day": int,
  "hour": int,
  "minute": int,
  "second": int,
  "millisecond": int
};

/*
 * Static Public methods
 */
/* TODO: option */
/* fromFormat */
[@bs.module "luxon"] [@bs.scope "DateTime"]
external fromFormat : (string, string) => t = "";

/* TODO: option */
/* fromFormatExplain */
[@bs.module "luxon"] [@bs.scope "DateTime"]
external fromFormatExplain : (string, string) => t = "";

/* TODO: option */
/* fromHTTP */
[@bs.module "luxon"] [@bs.scope "DateTime"]
external fromHTTP : string => t = "";

/* TODO: option */
/* fromISO */
[@bs.module "luxon"] [@bs.scope "DateTime"]
external fromISO : string => t = "";

/* TODO: option */
/* fromJSDate */
[@bs.module "luxon"] [@bs.scope "DateTime"]
external fromJSDate : Js.Date.t => t = "";

/* TODO: option */
/* fromMillis */
[@bs.module "luxon"] [@bs.scope "DateTime"]
external fromMillis : int => t = "";

/* TODO: option */
/* fromObject */
[@bs.module "luxon"] [@bs.scope "DateTime"]
external fromObject : Js.t('a) => t = "";

/* TODO: option */
/* fromRFC2822 */
[@bs.module "luxon"] [@bs.scope "DateTime"]
external fromRFC2822 : string => t = "";

/* TODO: option */
/* fromSQL */
[@bs.module "luxon"] [@bs.scope "DateTime"]
external fromSQL : string => t = "";

/* invalid */
[@bs.module "luxon"] [@bs.scope "DateTime"] external invalid : unit => t = "";

/* local */
[@bs.module "luxon"] [@bs.scope "DateTime"] external local : unit => t = "";

[@bs.module "luxon"] [@bs.scope "DateTime"]
external localY : int => t = "local";

[@bs.module "luxon"] [@bs.scope "DateTime"]
external localYM : (int, int) => t = "local";

[@bs.module "luxon"] [@bs.scope "DateTime"]
external localYMD : (int, int, int) => t = "local";

[@bs.module "luxon"] [@bs.scope "DateTime"]
external localYMDH : (int, int, int, int) => t = "local";

[@bs.module "luxon"] [@bs.scope "DateTime"]
external localYMDHM : (int, int, int, int, int) => t = "local";

[@bs.module "luxon"] [@bs.scope "DateTime"]
external localYMDHMS : (int, int, int, int, int, int) => t = "local";

[@bs.module "luxon"] [@bs.scope "DateTime"]
external localYMDHMSM : (int, int, int, int, int, int, int) => t = "local";

/* max */
[@bs.module "luxon"] [@bs.scope "DateTime"] [@bs.splice]
external max : array(t) => t = "";

/* min */
[@bs.module "luxon"] [@bs.scope "DateTime"] [@bs.splice]
external min : array(t) => t = "";

/* utc */
[@bs.module "luxon"] [@bs.scope "DateTime"] external utc : unit => t = "";

[@bs.module "luxon"] [@bs.scope "DateTime"] external utcY : int => t = "utc";

[@bs.module "luxon"] [@bs.scope "DateTime"]
external utcYM : (int, int) => t = "utc";

[@bs.module "luxon"] [@bs.scope "DateTime"]
external utcYMD : (int, int, int) => t = "utc";

[@bs.module "luxon"] [@bs.scope "DateTime"]
external utcYMDH : (int, int, int, int) => t = "utc";

[@bs.module "luxon"] [@bs.scope "DateTime"]
external utcYMDHM : (int, int, int, int, int) => t = "utc";

[@bs.module "luxon"] [@bs.scope "DateTime"]
external utcYMDHMS : (int, int, int, int, int, int) => t = "utc";

[@bs.module "luxon"] [@bs.scope "DateTime"]
external utcYMDHMSM : (int, int, int, int, int, int, int) => t = "utc";

/*
 * Public members
 */
[@bs.get] external day : t => int = "";

[@bs.get] external daysInMonth : t => int = "";

[@bs.get] external daysInYear : t => int = "";

[@bs.get] external hour : t => int = "";

[@bs.get] external invalidReason : t => string = "";

[@bs.get] external isInDST : t => bool = "";

[@bs.get] external isInLeapYear : t => bool = "";

[@bs.get] external isOffsetFixed : t => bool = "";

[@bs.get] external isValid : t => bool = "";

[@bs.get] external locale : t => string = "";

[@bs.get] external millisecond : t => int = "";

[@bs.get] external minute : t => int = "";

[@bs.get] external month : t => int = "";

[@bs.get] external monthLong : t => string = "";

[@bs.get] external monthShort : t => string = "";

[@bs.get] external numberingSystem : t => string = "";

[@bs.get] external offset : t => int = "";

[@bs.get] external offsetNameLong : t => string = "";

[@bs.get] external offsetNameShort : t => string = "";

[@bs.get] external ordinal : t => int = "";

[@bs.get] external outputCalendar : t => string = "";

[@bs.get] external second : t => int = "";

[@bs.get] external weekNumber : t => int = "";

[@bs.get] external weekYear : t => int = "";

[@bs.get] external weekday : t => int = "";

[@bs.get] external weekdayLong : t => string = "";

[@bs.get] external weekdayShort : t => string = "";

[@bs.get] external year : t => int = "";

[@bs.get] external zoneName : t => string = "";

/*
 * Public methods
 */
/* TODO: diff */
/* TODO: diffNow */
[@bs.send.pipe : t]
external endOf :
  (
  [@bs.string]
  [ | `year | `month | `day | `hour | `minute | `second | `millisecond]
  ) =>
  t =
  "";

[@bs.send.pipe : t] external equals : t => bool = "";

[@bs.send.pipe : t]
external get :
  (
    t,
    [@bs.string]
    [ | `year | `month | `day | `hour | `minute | `second | `millisecond]
  ) =>
  int =
  "";

[@bs.send.pipe : t]
external hasSame :
  (
    t,
    [@bs.string]
    [ | `year | `month | `day | `hour | `minute | `second | `millisecond]
  ) =>
  bool =
  "";

[@bs.send] external inspect : t => string = "";

/* TODO: minus */
/* TODO: plus */
/* TODO: reconfigure */
/* TODO: resolvedLocaleOpts */
/* TODO: [@bs.send.pipe : t] external set : dt => t = ""; */
[@bs.send.pipe : t] external setLocale : string => t = "";

[@bs.send.pipe : t] external setZone : string => t = "";

[@bs.send.pipe : t]
external startOf :
  (
  [@bs.string]
  [ | `year | `month | `day | `hour | `minute | `second | `millisecond]
  ) =>
  t =
  "";

/* TODO: toFormat */
[@bs.send] external toHTTP : t => string = "";

/* TODO: option */
[@bs.send] external toISO : t => string = "";

[@bs.send] external toISODate : t => string = "";

/* TODO: option */
[@bs.send] external toISOTime : t => string = "";

[@bs.send] external toISOWeekDate : t => string = "";

[@bs.send] external toJSDate : t => Js.Date.t = "";

[@bs.send] external toJSON : t => string = "";

[@bs.send] external toLocal : t => t = "";

[@bs.send] external toObject : t => dt = "";

[@bs.send] external toRFC2822 : t => string = "";

/* TODO: enable to ignore offset and include zone */
[@bs.send] external toSQL : t => string = "";

[@bs.send] external toSQLDate : t => string = "";

/* TODO: enable to ignore offset and include zone */
[@bs.send] external toSQLTime : t => string = "";

[@bs.send] external toString : t => string = "";

[@bs.send] external toUTC : t => t = "";

[@bs.send] external valueOf : t => int = "";
